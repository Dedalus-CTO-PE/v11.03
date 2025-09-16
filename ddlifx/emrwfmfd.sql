create table emrwfmaf
(
  emwffld     char(5) default ' ' not null,
  emwfide     char(35) default ' ' not null,
  emwfdes     char(35) default ' ' not null,
  emwfsde     char(35) default ' ' not null,
  emwfman     char(1) default ' ' not null,
  emwfidp     char(1) default ' ' not null,
  emwfexf     char(3) default ' ' not null,
  emwfres     char(3) default ' ' not null,
  emwfmnd     char(1) default ' ' not null,
  emwfspa     char(23) default ' ' not null,
  lf          char(1)
);
create unique index emrwfma1 on emrwfmaf
(
emwffld
);
create unique index emrwfma2 on emrwfmaf
(
emwfman,
emwffld
);
create unique index emrwfma3 on emrwfmaf
(
emwfexf,
emwffld
);
create unique index emrwfma4 on emrwfmaf
(
emwfres,
emwffld
);
revoke all on emrwfmaf from public ; 
grant select on emrwfmaf to public ; 
