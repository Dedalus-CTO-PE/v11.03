create table pmsoecaf
(
  pmoevisn    char(8) default ' ' not null,
  pmoecntr    char(3) default ' ' not null,
  pmoestat    char(2) default ' ' not null,
  pmoeurno    char(8) default ' ' not null,
  pmoearid    char(20) default ' ' not null,
  pmoetrid    char(24) default ' ' not null,
  pmoerqdt    char(8) default ' ' not null,
  pmoeetyp    char(2) default ' ' not null,
  pmoeerrc    char(4) default ' ' not null,
  pmoeerrd    char(100) default ' ' not null,
  pmoecdte    char(8) default ' ' not null,
  pmoectim    char(8) default ' ' not null,
  pmoeudte    char(8) default ' ' not null,
  pmoeutim    char(8) default ' ' not null,
  pmoehosp    char(3) default ' ' not null,
  pmoeeleg    char(8) default ' ' not null,
  pmoespar    char(19) default ' ' not null,
  lf          char(1)
);
create unique index pmsoeca1 on pmsoecaf
(
pmoevisn,
pmoecntr
);
create unique index pmsoeca2 on pmsoecaf
(
pmoestat,
pmoehosp,
pmoevisn,
pmoecntr
);
revoke all on pmsoecaf from public ; 
grant select on pmsoecaf to public ; 
