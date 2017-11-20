let component = ReasonReact.statelessComponent("App");

let ste = ReasonReact.stringToElement;

let make = (_children) => {...component, render: (_self) => <div> (ste("Hello Reason")) </div>};