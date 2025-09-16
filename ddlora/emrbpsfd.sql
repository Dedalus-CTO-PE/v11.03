create table emrbpsaf
(
  embpstcd    varchar2(3) default ' ' not null,
  embpptyp    varchar2(1) default ' ' not null,
  embpondt    varchar2(8) default ' ' not null,
  embpontm    varchar2(8) default ' ' not null,
  embprson    varchar2(3) default ' ' not null,
  embpofdt    varchar2(8) default ' ' not null,
  embpoftm    varchar2(8) default ' ' not null,
  embpffl1    varchar2(100) default ' ' not null,
  embpffl2    varchar2(100) default ' ' not null,
  embpffl3    varchar2(100) default ' ' not null,
  embpffl4    varchar2(100) default ' ' not null,
  embpffl5    varchar2(100) default ' ' not null,
  embpnamb    varchar2(3) default ' ' not null,
  embpuscr    varchar2(10) default ' ' not null,
  embpdtrc    varchar2(8) default ' ' not null,
  embptmrc    varchar2(8) default ' ' not null,
  embpusur    varchar2(10) default ' ' not null,
  embpdtru    varchar2(8) default ' ' not null,
  embptmru    varchar2(8) default ' ' not null,
  embpahcp    varchar2(10) default ' ' not null,
  embpffna    varchar2(45) default ' ' not null,
  embpffca    varchar2(45) default ' ' not null,
  embpspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrbpsa1 primary key( 
embpstcd,
embpptyp,
embpondt,
embpontm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrbpsa2 on emrbpsaf
(
embpstcd,
embpondt,
embpontm,
embpptyp
)
  tablespace pas_indx; 
