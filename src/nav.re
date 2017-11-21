let component = ReasonReact.statelessComponent("Nav");

let ste = ReasonReact.stringToElement;

let navigateTo = (router, event, routeName) => {
  ReactEventRe.Mouse.preventDefault(event);
  DirectorRe.setRoute(router, routeName)
};

let goToHome = (router, routeName, event) => navigateTo(router, event, routeName);

let goToAlbum = (router, routeName, event) => navigateTo(router, event, routeName);

let goToArtist = (router, routeName, event) => navigateTo(router, event, routeName);

let goToPlayer = (router, routeName, event) => navigateTo(router, event, routeName);

let make = (~router, _children) => {
  ...component,
  render: (_self) =>
    <nav>
      <div className="active">
        <a href="#" onClick=(goToHome(router, "/album"))> <span className="fa fa-music" /> </a>
      </div>
      <div>
        <a href="#" onClick=(goToArtist(router, "/artist"))> <span className="fa fa-user" /> </a>
      </div>
      <div> <a href="search.html"> <span className="fa fa-search" /> </a> </div>
    </nav>
};