create table pmsesdaf
(
pmsdfbid    varchar2(3),
pmsdarid    varchar2(20),
pmsdfrid    varchar2(12),
pmsdrptc    varchar2(3),
pmsdscod    varchar2(11),
pmsdsrvc    varchar2(3),
pmsdsfec    varchar2(4),
pmsdsexc    varchar2(3),
pmsdsfet    varchar2(80),
pmsdspar    varchar2(30),
lf          varchar2(1),
constraint pmsesda1 primary key( 
pmsdfbid,
pmsdarid,
pmsdfrid,
pmsdrptc,
pmsdscod,
pmsdsrvc,
pmsdsfec,
pmsdsexc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsesdaf for pmsesdaf;
