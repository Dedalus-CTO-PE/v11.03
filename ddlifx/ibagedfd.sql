create table ibagedaf
(
  ibgecode    char(6) default ' ' not null,
  ibgeedat    char(8) default ' ' not null,
  ibgeamnt    decimal(5,2) default 0 not null,
  ibgespar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index ibageda1 on ibagedaf
(
ibgecode,
ibgeedat
);
revoke all on ibagedaf from public ; 
grant select on ibagedaf to public ; 
