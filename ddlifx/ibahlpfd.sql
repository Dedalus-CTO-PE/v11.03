create table ibahlpaf
(
  ibhpname    char(8) default ' ' not null,
  dibhplin    char(3) default ' ' not null,
  ibhplink    char(8) default ' ' not null,
  ibhptext    char(76) default ' ' not null,
  lf          char(1)
);
create unique index ibahlpa1 on ibahlpaf
(
ibhpname,
dibhplin
);
create unique index ibahlpa2 on ibahlpaf
(
dibhplin,
ibhpname
);
revoke all on ibahlpaf from public ; 
grant select on ibahlpaf to public ; 
