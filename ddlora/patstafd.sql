create table patstads
(
sadyear     varchar2(4),
sadtype     varchar2(1),
sadcode     varchar2(3),
sadmth1     number(5,0),
sadmth2     number(5,0),
sadmth3     number(5,0),
sadmth4     number(5,0),
sadmth5     number(5,0),
sadmth6     number(5,0),
sadmth7     number(5,0),
sadmth8     number(5,0),
sadmth9     number(5,0),
sadmth10    number(5,0),
sadmth11    number(5,0),
sadmth12    number(5,0),
sadmth13    number(5,0),
sadspare    varchar2(9),
lf          varchar2(1),
constraint patstad1 primary key( 
sadyear,
sadtype,
sadcode)
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
create public synonym patstads for patstads;
