let component = ReasonReact.statelessComponent("App");

let ste = ReasonReact.stringToElement;

let make = (_children) => {
  ...component,
  render: (_self) =>
    <nav>
      <div className="active"> <a href="index.html"> <span className="fa fa-music" /> </a> </div>
      <div> <a href="artist.html"> <span className="fa fa-user" /> </a> </div>
      <div> <a href="song.html"> <span className="fa fa-list" /> </a> </div>
      <div> <a href="search.html"> <span className="fa fa-search" /> </a> </div>
    </nav>
};