let component = ReasonReact.statelessComponent("Nav");

let ste = ReasonReact.stringToElement;

let make = (~router, _children) => {
  ...component,
  render: (_self) => {
    let goToAlbum = (event) => {
      ReactEventRe.Mouse.preventDefault(event);
      DirectorRe.setRoute(router, "/")
    };
    let goToArtist = (event) => {
      ReactEventRe.Mouse.preventDefault(event);
      DirectorRe.setRoute(router, "/artist")
    };
    <nav>
      <div className="active">
        <a href="#" onClick=goToAlbum> <span className="fa fa-music" /> </a>
      </div>
      <div> <a href="#" onClick=goToArtist> <span className="fa fa-user" /> </a> </div>
      <div> <a href="song.html"> <span className="fa fa-list" /> </a> </div>
      <div> <a href="search.html"> <span className="fa fa-search" /> </a> </div>
    </nav>
  }
};