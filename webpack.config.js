const path = require("path");
const HtmlWebpackPlugin = require("html-webpack-plugin");
const CleanWebpackPlugin = require("clean-webpack-plugin");
const ExtractTextPlugin = require("extract-text-webpack-plugin");

module.exports = {
  entry: {
    root: "./src/index.re",
    css: "./scss/styles.scss"
  },
  output: {
    path: path.resolve(__dirname, "bundledOutputs"),
    filename: "[name].js"
  },
  watch: true,
  devServer: {
    contentBase: "./bundledOutputs"
  },
  plugins: [
    new CleanWebpackPlugin(["bundledOutputs"]),
    new HtmlWebpackPlugin({
      template: "src/index.html"
    }),
    // new HtmlWebpackPlugin({
    //   template: "src/artist.html"
    // }),
    // new HtmlWebpackPlugin({
    //   template: "src/player.html"
    // }),
    new ExtractTextPlugin("styles.css")
  ],
  module: {
    rules: [
      // Set up Reason and OCaml files to use the loader
      { test: /\.(re|ml)$/, use: "bs-loader" },
      {
        test: /\.(css|scss)$/,
        use: ExtractTextPlugin.extract({
          fallback: "style-loader",
          use: [
            {
              loader: "css-loader",
              options: {
                minimize: true
              }
            },
            {
              loader: "postcss-loader"
            },
            {
              loader: "sass-loader"
            }
          ]
        })
      },
      {
        test: /\.woff(2)?(\?v=[0-9]\.[0-9]\.[0-9])?$/,
        use: [
          {
            loader: "url-loader",
            options: {
              limit: 10000,
              mimetype: "application/font-woff"
            }
          }
        ]
      },
      {
        test: /\.(png|jp(e*)g|svg)$/,
        use: [
          {
            loader: "url-loader",
            options: {
              limit: 8000, // Convert images < 8kb to base64 strings
              name: "images/[hash]-[name].[ext]"
            }
          }
        ]
      },
      {
        test: /\.(ttf|eot|svg)(\?v=[0-9]\.[0-9]\.[0-9])?$/,
        use: [{ loader: "file-loader" }]
      }
    ]
  },
  resolve: {
    extensions: [".re", ".ml", ".js"]
  }
};
