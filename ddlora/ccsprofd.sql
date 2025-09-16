create table ccsproaf
(
  ccprpro     varchar2(4) default ' ' not null,
  ccprdes     varchar2(35) default ' ' not null,
  ccprp01     number(8,2) default 0 not null,
  ccprp02     number(8,2) default 0 not null,
  ccprp03     number(8,2) default 0 not null,
  ccprp04     number(8,2) default 0 not null,
  ccprp05     number(8,2) default 0 not null,
  ccprp06     number(8,2) default 0 not null,
  ccprp07     number(8,2) default 0 not null,
  ccprp08     number(8,2) default 0 not null,
  ccprp09     number(8,2) default 0 not null,
  ccprp10     number(8,2) default 0 not null,
  ccprp11     number(8,2) default 0 not null,
  ccprp12     number(8,2) default 0 not null,
  ccprp13     number(8,2) default 0 not null,
  ccprspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsproa1 primary key( 
ccprpro)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
