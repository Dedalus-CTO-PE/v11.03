create table allpkiaf
(
  alpkdept    char(3) default ' ' not null,
  alpkprob    char(9) default ' ' not null,
  alpkkkwd    char(40) default ' ' not null,
  alpkspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index allpkia1 on allpkiaf
(
alpkdept,
alpkprob,
alpkkkwd
);
create unique index allpkia2 on allpkiaf
(
alpkdept,
alpkkkwd,
alpkprob
);
revoke all on allpkiaf from public ; 
grant select on allpkiaf to public ; 
