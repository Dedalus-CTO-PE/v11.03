create table ibapabxf
(
  ibpbextn    char(4) default ' ' not null,
  ibpbsdat    char(8) default ' ' not null,
  ibpbstim    char(8) default ' ' not null,
  ibpbedat    char(8) default ' ' not null,
  ibpbetim    char(8) default ' ' not null,
  ibpbphno    char(32) default ' ' not null,
  ibpbpuls    decimal(4,0) default 0 not null,
  ibpbbild    char(8) default ' ' not null,
  ibpbspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index ibapbxa1 on ibapabxf
(
ibpbextn,
ibpbsdat,
ibpbstim
);
create unique index ibapbxa2 on ibapabxf
(
ibpbsdat,
ibpbstim,
ibpbextn
);
revoke all on ibapabxf from public ; 
grant select on ibapabxf to public ; 
