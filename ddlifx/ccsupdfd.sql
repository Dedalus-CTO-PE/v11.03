create table ccsupdaf
(
  ccuprun     char(4) default ' ' not null,
  ccuprec     char(8) default ' ' not null,
  ccuphcd     char(2) default ' ' not null,
  ccupdpt     char(8) default ' ' not null,
  ccuppcd     char(8) default ' ' not null,
  ccupenc     char(16) default ' ' not null,
  ccupurn     char(10) default ' ' not null,
  ccupdat     char(8) default ' ' not null,
  ccuptim     char(5) default ' ' not null,
  ccupqty     decimal(8,2) default 0 not null,
  ccupchg     decimal(14,2) default 0 not null,
  ccupcl1     char(4) default ' ' not null,
  ccupcl2     char(4) default ' ' not null,
  ccupcl3     char(4) default ' ' not null,
  ccupcl4     char(4) default ' ' not null,
  ccupcl5     char(4) default ' ' not null,
  ccupspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ccsupda1 on ccsupdaf
(
ccuprun,
ccuprec
);
create  index ccsupda2 on ccsupdaf
(
ccuphcd,
ccupenc,
ccupdat,
ccuptim
);
create  index ccsupda3 on ccsupdaf
(
ccuphcd,
ccupdpt,
ccuppcd,
ccupdat,
ccuptim
);
create  index ccsupda4 on ccsupdaf
(
ccupurn,
ccupdat,
ccuptim
);
revoke all on ccsupdaf from public ; 
grant select on ccsupdaf to public ; 
