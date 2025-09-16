create table pmsfmsaf
(
pmfmhosp    varchar2(3),
pmfmsyst    varchar2(1),
pmfmrsub    varchar2(1),
pmfmcode    varchar2(13),
pmfmfdis    varchar2(5),
pmfmfres    varchar2(4),
pmfmfled    varchar2(2),
pmfmfcrd    varchar2(12),
pmfmfdeb    varchar2(12),
pmfmgsta    varchar2(12),
pmfmtdis    varchar2(5),
pmfmtres    varchar2(4),
pmfmtled    varchar2(2),
pmfmtcrd    varchar2(12),
pmfmtdeb    varchar2(12),
pmfmbasc    varchar2(3),
pmfmspar    varchar2(80),
lf          varchar2(1),
constraint pmsfmsa1 primary key( 
pmfmhosp,
pmfmsyst,
pmfmrsub,
pmfmcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsfmsaf for pmsfmsaf;
