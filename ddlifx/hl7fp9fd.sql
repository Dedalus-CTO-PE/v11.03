create table hl7fp9af
(
  hlp9rsid    char(64) default ' ' not null,
  hlp9vrid    char(10) default ' ' not null,
  hlp9cnt1    char(4) default ' ' not null,
  hlp9cnt2    char(4) default ' ' not null,
  hlp9ause    char(50) default ' ' not null,
  hlp9atyp    char(50) default ' ' not null,
  hlp9atxt    char(200) default ' ' not null,
  hlp9aln1    char(200) default ' ' not null,
  hlp9aln2    char(200) default ' ' not null,
  hlp9aln3    char(200) default ' ' not null,
  hlp9aln4    char(200) default ' ' not null,
  hlp9aln5    char(200) default ' ' not null,
  hlp9acty    char(200) default ' ' not null,
  hlp9adst    char(200) default ' ' not null,
  hlp9asta    char(200) default ' ' not null,
  hlp9apoc    char(200) default ' ' not null,
  hlp9acou    char(200) default ' ' not null,
  hlp9astr    char(40) default ' ' not null,
  hlp9aend    char(40) default ' ' not null,
  hlp9spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp9a1 on hl7fp9af
(
hlp9rsid,
hlp9vrid,
hlp9cnt1,
hlp9cnt2
);
revoke all on hl7fp9af from public ; 
grant select on hl7fp9af to public ; 
