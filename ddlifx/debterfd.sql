create table debaudte
(
  dbteaudd    char(8) default ' ' not null,
  dbteaudt    char(8) default ' ' not null,
  dbteaudp    char(2) default ' ' not null,
  dbteaudr    char(1) default ' ' not null,
  dbteauds    decimal(1,0) default 0 not null,
  dbteaudo    char(4) default ' ' not null,
  dbteter     char(3) default ' ' not null,
  dbtedes     char(35) default ' ' not null,
  dbteact     decimal(1,0) default 0 not null,
  dbteur1     char(25) default ' ' not null,
  dbteur2     char(25) default ' ' not null,
  dbteud1     char(8) default ' ' not null,
  dbteud2     char(8) default ' ' not null,
  dbteuy1     char(1) default ' ' not null,
  dbteuy2     char(1) default ' ' not null,
  dbteuc1     char(3) default ' ' not null,
  dbteuc2     char(3) default ' ' not null,
  dbtespa     char(20) default ' ' not null,
  lf          char(1)
);
create index debaudte on debaudte
(
dbteaudd,
dbteaudt,
dbteaudp,
dbteaudr
);
revoke all on debaudte from public ; 
grant select on debaudte to public ; 
create table debteraf
(
  dbteter     char(3) default ' ' not null,
  dbtedes     char(35) default ' ' not null,
  dbteact     decimal(1,0) default 0 not null,
  dbteur1     char(25) default ' ' not null,
  dbteur2     char(25) default ' ' not null,
  dbteud1     char(8) default ' ' not null,
  dbteud2     char(8) default ' ' not null,
  dbteuy1     char(1) default ' ' not null,
  dbteuy2     char(1) default ' ' not null,
  dbteuc1     char(3) default ' ' not null,
  dbteuc2     char(3) default ' ' not null,
  dbtespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index debtera1 on debteraf
(
dbteter
);
revoke all on debteraf from public ; 
grant select on debteraf to public ; 
