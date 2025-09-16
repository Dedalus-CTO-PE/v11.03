create table pmsdaaaf
(
pmdatype    varchar2(3),
pmdaadd1    varchar2(35),
pmdaadd2    varchar2(35),
pmdaadd3    varchar2(35),
pmdaadd4    varchar2(35),
pmdapost    varchar2(8),
pmdaphon    varchar2(20),
pmdaspar    varchar2(20),
lf          varchar2(1),
constraint pmsdaaa1 primary key( 
pmdatype)
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
create public synonym pmsdaaaf for pmsdaaaf;
