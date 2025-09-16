create table webihdaf
(
  wbikfbid    varchar2(3) default ' ' not null,
  wbikarid    varchar2(20) default ' ' not null,
  wbikfrid    varchar2(15) default ' ' not null,
  wbikrptc    varchar2(3) default ' ' not null,
  wbikstat    varchar2(50) default ' ' not null,
  wbikfscd    varchar2(4) default ' ' not null,
  wbikfstx    varchar2(80) default ' ' not null,
  wbikcfac    varchar2(1) default ' ' not null,
  wbikcpam    varchar2(9) default ' ' not null,
  wbikexam    varchar2(9) default ' ' not null,
  wbikfcid    varchar2(8) default ' ' not null,
  wbiktbam    varchar2(9) default ' ' not null,
  wbiktcam    varchar2(9) default ' ' not null,
  wbikrsta    varchar2(50) default ' ' not null,
  wbikftid    varchar2(24) default ' ' not null,
  wbikmsid    varchar2(36) default ' ' not null,
  wbikcuid    varchar2(10) default ' ' not null,
  wbikcdat    varchar2(8) default ' ' not null,
  wbikctim    varchar2(8) default ' ' not null,
  wbikuuid    varchar2(10) default ' ' not null,
  wbikudat    varchar2(8) default ' ' not null,
  wbikutim    varchar2(8) default ' ' not null,
  wbikspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webihda1 primary key( 
wbikfbid,
wbikarid,
wbikfrid,
wbikrptc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webihda2 on webihdaf
(
wbikftid,
wbikfbid,
wbikarid,
wbikfrid,
wbikrptc
)
  tablespace pas_indx; 
create unique index webihda3 on webihdaf
(
wbikmsid,
wbikfbid,
wbikarid,
wbikfrid,
wbikrptc
)
  tablespace pas_indx; 
