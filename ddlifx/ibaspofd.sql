create table ibaspolf
(
  cspname     char(8) default ' ' not null,
  cspdate     char(8) default ' ' not null,
  csptime     char(8) default ' ' not null,
  cspdesc     char(30) default ' ' not null,
  cspoper     char(4) default ' ' not null,
  cspleve     char(1) default ' ' not null,
  cspdept     char(3) default ' ' not null,
  cspxtra     char(25) default ' ' not null,
  lf          char(1)
);
create unique index ibaspol1 on ibaspolf
(
cspname
);
create unique index ibaspol2 on ibaspolf
(
cspdept,
cspname
);
create unique index ibaspol3 on ibaspolf
(
cspdept,
cspdate,
csptime,
cspname
);
revoke all on ibaspolf from public ; 
grant select on ibaspolf to public ; 
