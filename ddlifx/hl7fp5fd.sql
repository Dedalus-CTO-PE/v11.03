create table hl7fp5af
(
  hlp5rsid    char(64) default ' ' not null,
  hlp5vrid    char(10) default ' ' not null,
  hlp5cnt1    char(4) default ' ' not null,
  hlp5cnt2    char(4) default ' ' not null,
  hlp5eurl    char(255) default ' ' not null,
  hlp5valu    char(200) default ' ' not null,
  hlp5text    char(200) default ' ' not null,
  hlp5syst    char(255) default ' ' not null,
  hlp5vers    char(50) default ' ' not null,
  hlp5code    char(200) default ' ' not null,
  hlp5disp    char(200) default ' ' not null,
  hlp5user    char(10) default ' ' not null,
  hlp5sdtt    char(50) default ' ' not null,
  hlp5edtt    char(50) default ' ' not null,
  hlp5ause    char(40) default ' ' not null,
  hlp5atyp    char(40) default ' ' not null,
  hlp5atxt    char(200) default ' ' not null,
  hlp5aln1    char(200) default ' ' not null,
  hlp5aln2    char(200) default ' ' not null,
  hlp5aln3    char(200) default ' ' not null,
  hlp5aln4    char(200) default ' ' not null,
  hlp5apos    char(40) default ' ' not null,
  hlp5acou    char(200) default ' ' not null,
  hlp5astr    char(40) default ' ' not null,
  hlp5aend    char(40) default ' ' not null,
  hlp5durl    char(255) default ' ' not null,
  hlp5dsys    char(255) default ' ' not null,
  hlp5dver    char(50) default ' ' not null,
  hlp5dcod    char(50) default ' ' not null,
  hlp5ddis    char(200) default ' ' not null,
  hlp5duse    char(10) default ' ' not null,
  hlp5exid    char(200) default ' ' not null,
  hlp5spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp5a1 on hl7fp5af
(
hlp5rsid,
hlp5vrid,
hlp5cnt1,
hlp5cnt2
);
revoke all on hl7fp5af from public ; 
grant select on hl7fp5af to public ; 
