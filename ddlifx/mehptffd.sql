create table mehptfaf
(
  mhpfxdat    char(8) default ' ' not null,
  mhpfxnum    char(3) default ' ' not null,
  mhpfsorg    char(8) default ' ' not null,
  mhpfstat    char(1) default ' ' not null,
  mhpffdat    char(8) default ' ' not null,
  mhpftdat    char(8) default ' ' not null,
  mhpfrdno    char(5) default ' ' not null,
  mhpfrder    char(5) default ' ' not null,
  mhpfrdwn    char(5) default ' ' not null,
  mhpflsno    char(5) default ' ' not null,
  mhpflser    char(5) default ' ' not null,
  mhpflswn    char(5) default ' ' not null,
  mhpfspar    char(33) default ' ' not null,
  lf          char(1)
);
create unique index mehptfa1 on mehptfaf
(
mhpfxdat,
mhpfxnum
);
revoke all on mehptfaf from public ; 
grant select on mehptfaf to public ; 
