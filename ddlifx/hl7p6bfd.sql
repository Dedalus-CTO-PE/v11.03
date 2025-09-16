create table hl7p6baf
(
  hl6brsid    char(64) default ' ' not null,
  hl6bvrid    char(10) default ' ' not null,
  hl6bcnt1    char(4) default ' ' not null,
  hl6bcnt2    char(4) default ' ' not null,
  hl6bcgen    char(50) default ' ' not null,
  hl6boref    char(200) default ' ' not null,
  hl6botyp    char(255) default ' ' not null,
  hl6bodsp    char(200) default ' ' not null,
  hl6boius    char(50) default ' ' not null,
  hl6boisy    char(255) default ' ' not null,
  hl6boiva    char(200) default ' ' not null,
  hl6boitt    char(200) default ' ' not null,
  hl6boits    char(255) default ' ' not null,
  hl6boitv    char(200) default ' ' not null,
  hl6boitc    char(50) default ' ' not null,
  hl6boitd    char(200) default ' ' not null,
  hl6boitu    char(10) default ' ' not null,
  hl6boist    char(40) default ' ' not null,
  hl6boien    char(40) default ' ' not null,
  hl6bcstr    char(40) default ' ' not null,
  hl6bcend    char(40) default ' ' not null,
  hl6bspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7p6ba1 on hl7p6baf
(
hl6brsid,
hl6bvrid,
hl6bcnt1,
hl6bcnt2
);
revoke all on hl7p6baf from public ; 
grant select on hl7p6baf to public ; 
