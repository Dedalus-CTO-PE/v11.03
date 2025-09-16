create table emrbpsaf
(
  embpstcd    char(3) default ' ' not null,
  embpptyp    char(1) default ' ' not null,
  embpondt    char(8) default ' ' not null,
  embpontm    char(8) default ' ' not null,
  embprson    char(3) default ' ' not null,
  embpofdt    char(8) default ' ' not null,
  embpoftm    char(8) default ' ' not null,
  embpffl1    char(100) default ' ' not null,
  embpffl2    char(100) default ' ' not null,
  embpffl3    char(100) default ' ' not null,
  embpffl4    char(100) default ' ' not null,
  embpffl5    char(100) default ' ' not null,
  embpnamb    char(3) default ' ' not null,
  embpuscr    char(10) default ' ' not null,
  embpdtrc    char(8) default ' ' not null,
  embptmrc    char(8) default ' ' not null,
  embpusur    char(10) default ' ' not null,
  embpdtru    char(8) default ' ' not null,
  embptmru    char(8) default ' ' not null,
  embpahcp    char(10) default ' ' not null,
  embpffna    char(45) default ' ' not null,
  embpffca    char(45) default ' ' not null,
  embpspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emrbpsa1 on emrbpsaf
(
embpstcd,
embpptyp,
embpondt,
embpontm
);
create unique index emrbpsa2 on emrbpsaf
(
embpstcd,
embpondt,
embpontm,
embpptyp
);
revoke all on emrbpsaf from public ; 
grant select on emrbpsaf to public ; 
