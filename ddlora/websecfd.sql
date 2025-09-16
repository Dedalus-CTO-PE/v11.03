create table websecaf
(
  wbseuid     varchar2(10) default ' ' not null,
  wbsenam     varchar2(30) default ' ' not null,
  wbsedoc     varchar2(6) default ' ' not null,
  wbsepcd     varchar2(4) default ' ' not null,
  wbsewrd     varchar2(3) default ' ' not null,
  wbsesit     varchar2(6) default ' ' not null,
  wbsecli     varchar2(6) default ' ' not null,
  wbseocg     varchar2(3) default ' ' not null,
  wbsedir     varchar2(40) default ' ' not null,
  wbseesc     varchar2(3) default ' ' not null,
  wbseeuc     varchar2(3) default ' ' not null,
  wbseact     varchar2(1) default ' ' not null,
  wbseexp     varchar2(8) default ' ' not null,
  wbsepse     varchar2(1) default ' ' not null,
  wbsecnt     varchar2(2) default ' ' not null,
  wbseaut     varchar2(1) default ' ' not null,
  wbseage     varchar2(3) default ' ' not null,
  wbsedfm     varchar2(8) default ' ' not null,
  wbsegpcd    varchar2(10) default ' ' not null,
  wbsegppc    varchar2(10) default ' ' not null,
  wbsegpcn    varchar2(2) default ' ' not null,
  wbsemesa    varchar2(1) default ' ' not null,
  wbselacd    varchar2(8) default ' ' not null,
  wbselact    varchar2(5) default ' ' not null,
  wbsedept    varchar2(6) default ' ' not null,
  wbsecxa     varchar2(1) default ' ' not null,
  wbsedall    varchar2(3) default ' ' not null,
  wbsedtyp    varchar2(3) default ' ' not null,
  wbsehloc    varchar2(4) default ' ' not null,
  wbsevwsl    varchar2(1) default ' ' not null,
  wbseadsl    varchar2(1) default ' ' not null,
  wbsedgsi    varchar2(3) default ' ' not null,
  wbsefpcd    varchar2(4) default ' ' not null,
  wbsecash    varchar2(1) default ' ' not null,
  wbsemrts    varchar2(8) default ' ' not null,
  wbsehosp    varchar2(3) default ' ' not null,
  wbseltyp    varchar2(3) default ' ' not null,
  wbsefdep    varchar2(15) default ' ' not null,
  wbsenurs    varchar2(10) default ' ' not null,
  wbsecdat    varchar2(8) default ' ' not null,
  wbsectim    varchar2(8) default ' ' not null,
  wbsecuid    varchar2(10) default ' ' not null,
  wbseudat    varchar2(8) default ' ' not null,
  wbseutim    varchar2(8) default ' ' not null,
  wbseuuid    varchar2(10) default ' ' not null,
  wbsebedv    varchar2(1) default ' ' not null,
  wbsegpac    varchar2(1) default ' ' not null,
  wbserole    varchar2(10) default ' ' not null,
  wbsesect    varchar2(1) default ' ' not null,
  wbsevh1l    varchar2(1) default ' ' not null,
  wbseah1l    varchar2(1) default ' ' not null,
  wbsevh2l    varchar2(1) default ' ' not null,
  wbseah2l    varchar2(1) default ' ' not null,
  wbsevh3l    varchar2(1) default ' ' not null,
  wbseah3l    varchar2(1) default ' ' not null,
  wbsevh4l    varchar2(1) default ' ' not null,
  wbseah4l    varchar2(1) default ' ' not null,
  wbsevh5l    varchar2(1) default ' ' not null,
  wbseah5l    varchar2(1) default ' ' not null,
  wbsevh6l    varchar2(1) default ' ' not null,
  wbseah6l    varchar2(1) default ' ' not null,
  wbsevh7l    varchar2(1) default ' ' not null,
  wbseah7l    varchar2(1) default ' ' not null,
  wbsevh8l    varchar2(1) default ' ' not null,
  wbseah8l    varchar2(1) default ' ' not null,
  wbsevh9l    varchar2(1) default ' ' not null,
  wbseah9l    varchar2(1) default ' ' not null,
  wbsehhos    varchar2(3) default ' ' not null,
  wbseopdu    varchar2(3) default ' ' not null,
  wbseutlh    varchar2(3) default ' ' not null,
  wbseutlc    varchar2(4) default ' ' not null,
  wbseemai    varchar2(80) default ' ' not null,
  wbselogn    varchar2(80) default ' ' not null,
  wbsegenr    varchar2(1) default ' ' not null,
  wbsespar    varchar2(99) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webseca1 primary key( 
wbseuid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webseca2 on websecaf
(
wbsedir,
wbseuid
)
  tablespace pas_indx; 
create unique index webseca3 on websecaf
(
wbsepcd,
wbseuid
)
  tablespace pas_indx; 
create unique index webseca4 on websecaf
(
wbsecash,
wbseuid
)
  tablespace pas_indx; 
create unique index webseca5 on websecaf
(
wbsemrts,
wbseuid
)
  tablespace pas_indx; 
create unique index webseca6 on websecaf
(
wbsesect,
wbseuid
)
  tablespace pas_indx; 
create unique index webseca7 on websecaf
(
wbselogn
)
  tablespace pas_indx; 
