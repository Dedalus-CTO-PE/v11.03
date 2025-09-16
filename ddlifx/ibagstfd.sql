create table ibagstaf
(
  ibgscode    char(6) default ' ' not null,
  ibgsdesc    char(30) default ' ' not null,
  ibgsactv    decimal(1,0) default 0 not null,
  ibgsbasc    char(3) default ' ' not null,
  ibgsspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index ibagsta1 on ibagstaf
(
ibgscode
);
create unique index ibagsta2 on ibagstaf
(
ibgsdesc,
ibgscode
);
create unique index ibagsta3 on ibagstaf
(
ibgsbasc,
ibgscode
);
revoke all on ibagstaf from public ; 
grant select on ibagstaf to public ; 
