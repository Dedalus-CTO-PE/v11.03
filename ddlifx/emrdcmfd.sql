create table emrdcmaf
(
  emdcadmi    char(8) default ' ' not null,
  emdctxt1    char(50) default ' ' not null,
  emdctxt2    char(50) default ' ' not null,
  emdctxt3    char(50) default ' ' not null,
  emdctxt4    char(50) default ' ' not null,
  emdctxt5    char(50) default ' ' not null,
  emdctxt6    char(50) default ' ' not null,
  emdctxt7    char(50) default ' ' not null,
  emdctxt8    char(50) default ' ' not null,
  emdctxt9    char(50) default ' ' not null,
  emdcluid    char(10) default ' ' not null,
  emdcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrdcma1 on emrdcmaf
(
emdcadmi
);
revoke all on emrdcmaf from public ; 
grant select on emrdcmaf to public ; 
