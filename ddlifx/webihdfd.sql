create table webihdaf
(
  wbikfbid    char(3) default ' ' not null,
  wbikarid    char(20) default ' ' not null,
  wbikfrid    char(15) default ' ' not null,
  wbikrptc    char(3) default ' ' not null,
  wbikstat    char(50) default ' ' not null,
  wbikfscd    char(4) default ' ' not null,
  wbikfstx    char(80) default ' ' not null,
  wbikcfac    char(1) default ' ' not null,
  wbikcpam    char(9) default ' ' not null,
  wbikexam    char(9) default ' ' not null,
  wbikfcid    char(8) default ' ' not null,
  wbiktbam    char(9) default ' ' not null,
  wbiktcam    char(9) default ' ' not null,
  wbikrsta    char(50) default ' ' not null,
  wbikftid    char(24) default ' ' not null,
  wbikmsid    char(36) default ' ' not null,
  wbikcuid    char(10) default ' ' not null,
  wbikcdat    char(8) default ' ' not null,
  wbikctim    char(8) default ' ' not null,
  wbikuuid    char(10) default ' ' not null,
  wbikudat    char(8) default ' ' not null,
  wbikutim    char(8) default ' ' not null,
  wbikspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webihda1 on webihdaf
(
wbikfbid,
wbikarid,
wbikfrid,
wbikrptc
);
create unique index webihda2 on webihdaf
(
wbikftid,
wbikfbid,
wbikarid,
wbikfrid,
wbikrptc
);
create unique index webihda3 on webihdaf
(
wbikmsid,
wbikfbid,
wbikarid,
wbikfrid,
wbikrptc
);
revoke all on webihdaf from public ; 
grant select on webihdaf to public ; 
