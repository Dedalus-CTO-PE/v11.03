create table pmsadjaf
(
  pmajcntr    varchar2(6) default ' ' not null,
  pmajadjt    varchar2(3) default ' ' not null,
  pmajadjv    number(14,4) default 0 not null,
  pmajcuid    varchar2(10) default ' ' not null,
  pmajcdat    varchar2(8) default ' ' not null,
  pmajctim    varchar2(8) default ' ' not null,
  pmajuuid    varchar2(10) default ' ' not null,
  pmajudat    varchar2(8) default ' ' not null,
  pmajutim    varchar2(8) default ' ' not null,
  pmajspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsadja1 primary key( 
pmajcntr,
pmajadjt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
