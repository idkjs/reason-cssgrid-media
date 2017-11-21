let component = ReasonReact.statelessComponent("Body");

let ste = ReasonReact.stringToElement;

/* Just like any other variant data can be carried around with variants with the routes */
let make = (~route, ~router, _children) => {
  ...component,
  render: (_self) => {
    let select_subpage = (route) =>
      switch route {
      | Routes.Home => <Album />
      | Routes.Album => <Album />
      | Routes.Artist => <Artist />
      };
    <div> <Nav router /> <div> (route |> select_subpage) </div> </div>
  }
};