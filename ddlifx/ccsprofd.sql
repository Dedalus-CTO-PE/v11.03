create table ccsproaf
(
  ccprpro     char(4) default ' ' not null,
  ccprdes     char(35) default ' ' not null,
  ccprp01     decimal(8,2) default 0 not null,
  ccprp02     decimal(8,2) default 0 not null,
  ccprp03     decimal(8,2) default 0 not null,
  ccprp04     decimal(8,2) default 0 not null,
  ccprp05     decimal(8,2) default 0 not null,
  ccprp06     decimal(8,2) default 0 not null,
  ccprp07     decimal(8,2) default 0 not null,
  ccprp08     decimal(8,2) default 0 not null,
  ccprp09     decimal(8,2) default 0 not null,
  ccprp10     decimal(8,2) default 0 not null,
  ccprp11     decimal(8,2) default 0 not null,
  ccprp12     decimal(8,2) default 0 not null,
  ccprp13     decimal(8,2) default 0 not null,
  ccprspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsproa1 on ccsproaf
(
ccprpro
);
revoke all on ccsproaf from public ; 
grant select on ccsproaf to public ; 
