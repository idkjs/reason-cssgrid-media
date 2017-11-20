let component = ReasonReact.statelessComponent("Header");

let ste = ReasonReact.stringToElement;

let make = (_children) => {...component, render: (_self) => <header> (ste("Album")) </header>};