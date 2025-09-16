create table webbbeaf
(
  wbbeclid    varchar2(6) default ' ' not null,
  wbberptc    varchar2(3) default ' ' not null,
  wbbemevc    varchar2(2) default ' ' not null,
  wbbeevdt    varchar2(8) default ' ' not null,
  wbbeevid    varchar2(2) default ' ' not null,
  wbbeptsc    varchar2(4) default ' ' not null,
  wbbeptst    varchar2(500) default ' ' not null,
  wbbeptmn    varchar2(10) default ' ' not null,
  wbbeptmr    varchar2(1) default ' ' not null,
  wbbeptfn    varchar2(40) default ' ' not null,
  wbbeptgn    varchar2(40) default ' ' not null,
  wbbetrid    varchar2(24) default ' ' not null,
  wbbemsid    varchar2(36) default ' ' not null,
  wbberkey    varchar2(24) default ' ' not null,
  wbbespar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webbbea1 primary key( 
wbbeclid,
wbberptc,
wbbemevc,
wbberkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webbbea2 on webbbeaf
(
wbbetrid,
wbbeclid,
wbberptc,
wbbemevc,
wbberkey
)
  tablespace pas_indx; 
create unique index webbbea3 on webbbeaf
(
wbbemsid,
wbbeclid,
wbberptc,
wbbemevc,
wbberkey
)
  tablespace pas_indx; 
create unique index webbbea4 on webbbeaf
(
wbberkey,
wbbeclid,
wbberptc,
wbbemevc
)
  tablespace pas_indx; 
