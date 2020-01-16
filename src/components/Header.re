let str = ReasonReact.string;

[%mui.withStyles
  "StyledExample"({
    alignRight: ReactDOMRe.Style.make(~width="100%", ~textAlign="right", ()),
  })
];

[@react.component]
let make = () =>
  <MaterialUi_AppBar className="header">
    <StyledExample>
      ...{
           classes =>
             <h1 className={classes.alignRight}>
               {str("ReasonReact SSR Starter")}
             </h1>
         }
    </StyledExample>
  </MaterialUi_AppBar>;