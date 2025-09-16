create table ibapdfaf
(
  ibpdpid     char(8) default ' ' not null,
  ibpdrep     char(2) default ' ' not null,
  ibpduid     char(10) default ' ' not null,
  ibpdprt     char(6) default ' ' not null,
  ibpdcop     char(3) default ' ' not null,
  ibpddoc     char(8) default ' ' not null,
  ibpdnum     char(2) default ' ' not null,
  ibpdspa     char(100) default ' ' not null,
  lf          char(1)
);
create unique index ibapdfa1 on ibapdfaf
(
ibpdpid,
ibpdrep,
ibpduid
);
revoke all on ibapdfaf from public ; 
grant select on ibapdfaf to public ; 
