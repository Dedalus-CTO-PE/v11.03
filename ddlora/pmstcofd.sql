create table pmstcoaf
(
pmtccode    varchar2(10),
pmtctcom    varchar2(3),
pmtclnum    varchar2(3),
pmtccomm    varchar2(70),
pmtcudat    varchar2(8),
pmtcutim    varchar2(8),
pmtcuuid    varchar2(10),
pmtcspar    varchar2(30),
lf          varchar2(1),
constraint pmstcoa1 primary key( 
pmtccode,
pmtctcom,
pmtclnum)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmstcoaf for pmstcoaf;
create unique index pmstcoa2 on pmstcoaf
(
pmtccode,
pmtclnum,
pmtctcom
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pmstcoa3 on pmstcoaf
(
pmtctcom,
pmtclnum,
pmtccode
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
