let renderForRoute = (route, router) =>
  ReactDOMRe.renderToElementWithId(<Body route router />, "index");

let router = DirectorRe.makeRouter({"/": "index", "/album": "album", "/artist": "artist"});

let handlers = {
  "index": () => renderForRoute(Routes.Album, router),
  "album": () => renderForRoute(Routes.Album, router),
  "artist": () => renderForRoute(Routes.Artist, router)
};

DirectorRe.configure(router, {"html5history": true, "resource": handlers});

DirectorRe.init(router, "/");