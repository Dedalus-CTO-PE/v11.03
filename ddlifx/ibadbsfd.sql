create table ibadbsaf
(
  ibdbdbs     char(3) default ' ' not null,
  ibdbdes     char(35) default ' ' not null,
  ibdbdb01    char(40) default ' ' not null,
  ibdbdb02    char(40) default ' ' not null,
  ibdbdb03    char(40) default ' ' not null,
  ibdbdb04    char(40) default ' ' not null,
  ibdbdb05    char(40) default ' ' not null,
  ibdbdb06    char(40) default ' ' not null,
  ibdbdb07    char(40) default ' ' not null,
  ibdbdb08    char(40) default ' ' not null,
  ibdbdb09    char(40) default ' ' not null,
  ibdbdb10    char(40) default ' ' not null,
  ibdbur1     char(25) default ' ' not null,
  ibdbur2     char(25) default ' ' not null,
  ibdbud1     char(8) default ' ' not null,
  ibdbud2     char(8) default ' ' not null,
  ibdbuy1     char(1) default ' ' not null,
  ibdbuy2     char(1) default ' ' not null,
  ibdbspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ibadbsa1 on ibadbsaf
(
ibdbdbs
);
revoke all on ibadbsaf from public ; 
grant select on ibadbsaf to public ; 
