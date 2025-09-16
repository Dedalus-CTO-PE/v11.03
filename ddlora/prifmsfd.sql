create table prifmsaf
(
dprfmsub    varchar2(1),
prfmcod     varchar2(17),
prfmidi     varchar2(5),
prfmire     varchar2(4),
prfmild     varchar2(2),
prfmica     varchar2(12),
prfmida     varchar2(12),
prfmigs     varchar2(12),
prfmtdi     varchar2(5),
prfmtre     varchar2(4),
prfmtld     varchar2(2),
prfmtca     varchar2(12),
prfmtda     varchar2(12),
prfmbasc    varchar2(3),
prfmspa     varchar2(15),
lf          varchar2(1),
constraint prifmsa1 primary key( 
dprfmsub,
prfmcod)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym prifmsaf for prifmsaf;
