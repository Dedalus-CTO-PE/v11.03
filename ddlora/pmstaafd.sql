create table pmstaaaf
(
pmtafacl    varchar2(3),
pmtaadd1    varchar2(35),
pmtaadd2    varchar2(35),
pmtaadd3    varchar2(35),
pmtaadd4    varchar2(35),
pmtapost    varchar2(8),
pmtatelp    varchar2(35),
pmtatelb    varchar2(35),
pmtatelm    varchar2(35),
pmtaemai    varchar2(80),
pmtamelw    varchar2(20),
pmtaspar    varchar2(50),
lf          varchar2(1),
constraint pmstaaa1 primary key( 
pmtafacl)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmstaaaf for pmstaaaf;
