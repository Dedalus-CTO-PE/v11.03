create table ibamdpaf
(
  ibmdmenu    char(3) default ' ' not null,
  ibmdline    char(2) default ' ' not null,
  ibmddata    char(80) default ' ' not null,
  ibmdattr    char(80) default ' ' not null,
  ibmdspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ibamdpa1 on ibamdpaf
(
ibmdmenu,
ibmdline
);
revoke all on ibamdpaf from public ; 
grant select on ibamdpaf to public ; 
