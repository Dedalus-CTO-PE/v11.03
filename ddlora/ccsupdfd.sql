create table ccsupdaf
(
  ccuprun     varchar2(4) default ' ' not null,
  ccuprec     varchar2(8) default ' ' not null,
  ccuphcd     varchar2(2) default ' ' not null,
  ccupdpt     varchar2(8) default ' ' not null,
  ccuppcd     varchar2(8) default ' ' not null,
  ccupenc     varchar2(16) default ' ' not null,
  ccupurn     varchar2(10) default ' ' not null,
  ccupdat     varchar2(8) default ' ' not null,
  ccuptim     varchar2(5) default ' ' not null,
  ccupqty     number(8,2) default 0 not null,
  ccupchg     number(14,2) default 0 not null,
  ccupcl1     varchar2(4) default ' ' not null,
  ccupcl2     varchar2(4) default ' ' not null,
  ccupcl3     varchar2(4) default ' ' not null,
  ccupcl4     varchar2(4) default ' ' not null,
  ccupcl5     varchar2(4) default ' ' not null,
  ccupspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsupda1 primary key( 
ccuprun,
ccuprec)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create  index ccsupda2 on ccsupdaf
(
ccuphcd,
ccupenc,
ccupdat,
ccuptim
)
  tablespace pas_indx; 
create  index ccsupda3 on ccsupdaf
(
ccuphcd,
ccupdpt,
ccuppcd,
ccupdat,
ccuptim
)
  tablespace pas_indx; 
create  index ccsupda4 on ccsupdaf
(
ccupurn,
ccupdat,
ccuptim
)
  tablespace pas_indx; 
