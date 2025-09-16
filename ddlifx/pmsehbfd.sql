create table pmsehbaf
(
  pmhbuniq    char(20) default ' ' not null,
  pmhbdate    char(8) default ' ' not null,
  pmhbtime    char(8) default ' ' not null,
  pmhbstat    char(1) default ' ' not null,
  pmhbadat    char(8) default ' ' not null,
  pmhburno    char(8) default ' ' not null,
  pmhbvisn    char(8) default ' ' not null,
  pmhbhosp    char(3) default ' ' not null,
  pmhbudat    char(8) default ' ' not null,
  pmhbbtyp    char(3) default ' ' not null,
  pmhbavmo    char(100) default ' ' not null,
  pmhbeaid    char(20) default ' ' not null,
  pmhblddt    char(8) default ' ' not null,
  pmhbldty    char(3) default ' ' not null,
  pmhbutim    char(8) default ' ' not null,
  pmhbwebu    char(10) default ' ' not null,
  pmhbspar    char(200) default ' ' not null,
  lf          char(1)
);
create unique index pmsehba1 on pmsehbaf
(
pmhbuniq
);
create unique index pmsehba2 on pmsehbaf
(
pmhbadat,
pmhbhosp,
pmhbstat,
pmhbuniq
);
create unique index pmsehba3 on pmsehbaf
(
pmhburno,
pmhbadat,
pmhbstat,
pmhbuniq
);
create unique index pmsehba4 on pmsehbaf
(
pmhbhosp,
pmhbadat,
pmhbstat,
pmhbuniq
);
create unique index pmsehba5 on pmsehbaf
(
pmhbvisn,
pmhbuniq
);
create unique index pmsehba6 on pmsehbaf
(
pmhbeaid,
pmhbuniq
);
create unique index pmsehba7 on pmsehbaf
(
pmhbdate,
pmhbhosp,
pmhbstat,
pmhbuniq
);
revoke all on pmsehbaf from public ; 
grant select on pmsehbaf to public ; 
