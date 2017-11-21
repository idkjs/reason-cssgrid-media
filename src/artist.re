let ste = ReasonReact.stringToElement;

[@bs.module] external andrea : string = "./assets/images/r_andrea160.jpg";

[@bs.module] external clara : string = "./assets/images/r_clara160.jpg";

[@bs.module] external jen : string = "./assets/images/r_jen160.jpg";

[@bs.module] external jordan : string = "./assets/images/r_jordan160.jpg";

[@bs.module] external rey : string = "./assets/images/r_rey160.jpg";

[@bs.module] external sally : string = "./assets/images/r_sally160.jpg";

let component = ReasonReact.statelessComponent("Artist");

let make = (~router, _children) => {
  ...component,
  render: (_self) =>
    <div>
      <Nav router />
      <header> (ste("Artist")) </header>
      <main className="artist">
        <section>
          <div> <a href="player.html"> <img src=andrea /> </a> </div>
          <div> (ste("Andrea Reys")) </div>
        </section>
        <section>
          <div> <a href="player.html"> <img src=clara /> </a> </div>
          <div> (ste("Brenda Bache")) </div>
        </section>
        <section>
          <div> <a href="player.html"> <img src=jen /> </a> </div>
          <div> (ste("Clara Stoneman")) </div>
        </section>
        <section>
          <div> <a href="player.html"> <img src=jordan /> </a> </div>
          <div> (ste("Dory Jensen")) </div>
        </section>
        <section>
          <div> <a href="player.html"> <img src=rey /> </a> </div>
          <div> (ste("Erica Marlay")) </div>
        </section>
        <section>
          <div> <a href="player.html"> <img src=sally /> </a> </div>
          <div> (ste("Fanny Dylan")) </div>
        </section>
      </main>
    </div>
};