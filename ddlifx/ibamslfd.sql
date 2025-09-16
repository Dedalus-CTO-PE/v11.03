create table ibamslaf
(
  ibmsmenu    char(3) default ' ' not null,
  ibmsselc    char(3) default ' ' not null,
  ibmstype    decimal(1,0) default 0 not null,
  ibmsnumb    char(3) default ' ' not null,
  ibmscomd    char(30) default ' ' not null,
  ibmsdbcd    char(4) default ' ' not null,
  lf          char(1)
);
create unique index ibamsla1 on ibamslaf
(
ibmsmenu,
ibmsselc
);
create unique index ibamsla2 on ibamslaf
(
ibmsmenu,
ibmsnumb,
ibmsselc
);
revoke all on ibamslaf from public ; 
grant select on ibamslaf to public ; 
