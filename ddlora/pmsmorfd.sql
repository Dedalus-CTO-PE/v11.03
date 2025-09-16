create table pmsmoraf
(
pmmrurno    varchar2(8),
pmmradmn    varchar2(8),
pmmrardt    varchar2(8),
pmmrartm    varchar2(8),
pmmrloca    varchar2(3),
pmmrecby    varchar2(3),
pmmrecdt    varchar2(8),
pmmrectm    varchar2(8),
pmmreccm    varchar2(70),
pmmracby    varchar2(3),
pmmracdt    varchar2(8),
pmmractm    varchar2(8),
pmmraccm    varchar2(70),
pmmrhosp    varchar2(3),
pmmrspar    varchar2(97),
lf          varchar2(1),
constraint pmsmora1 primary key( 
pmmradmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsmoraf for pmsmoraf;
create unique index pmsmora2 on pmsmoraf
(
pmmrardt,
pmmrartm,
pmmradmn
)
  tablespace pas_indx; 
