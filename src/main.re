let component = ReasonReact.statelessComponent("Main");

[@bs.module] external hotel : string = "../images/hotel.jpg";

[@bs.module] external divorce : string = "../images/divorce.jpg";

[@bs.module] external room2 : string = "../images/room2.jpg";

[@bs.module] external story1 : string = "../images/story1.jpg";

[@bs.module] external story2 : string = "../images/story2.jpg";

[@bs.module] external story3 : string = "../images/story3.jpg";

[@bs.module] external story4 : string = "../images/story4.jpg";

let ste = ReasonReact.stringToElement;

let make = (_children) => {
  ...component,
  render: (_self) =>
    <main className="clearfix">
      <div className="teaser lead">
        <img src=hotel alt="" />
        <span> (ste("Virtual Hotel Service Announced")) </span>
      </div>
      <div className="teaser secondTop">
        <img src=divorce alt="" />
        <span> (ste("Declining Divorce Rates Suprise Researchers")) </span>
      </div>
      <div className="teaser secondBot">
        <img src=room2 alt="" />
        <span> (ste("Hotel Gets Facelift")) </span>
      </div>
      <div className="teaser ie1">
        <img src=story1 alt="" />
        <span> (ste("Roaring 20's Hotel Reopens")) </span>
      </div>
      <div className="teaser ie2">
        <img src=story2 alt="" />
        <span> (ste("Auto Recall Stuns Owners")) </span>
      </div>
      <div className="teaser ie3">
        <img src=story3 alt="" />
        <span> (ste("Politician Behind Bars")) </span>
      </div>
      <div className="teaser ie4">
        <img src=story4 alt="" />
        <span> (ste("New WIFI in Airports")) </span>
      </div>
    </main>
};