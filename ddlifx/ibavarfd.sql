create table ibavaraf
(
  dibvrtyp    char(3) default ' ' not null,
  ibvrdesc    char(30) default ' ' not null,
  dibvrfnm    char(5) default ' ' not null,
  ibvrflen    decimal(3,0) default 0 not null,
  ibvrspar    char(28) default ' ' not null,
  lf          char(1)
);
create unique index ibavard1 on ibavaraf
(
dibvrtyp,
ibvrdesc
);
create unique index ibavard2 on ibavaraf
(
dibvrtyp,
dibvrfnm
);
revoke all on ibavaraf from public ; 
grant select on ibavaraf to public ; 
