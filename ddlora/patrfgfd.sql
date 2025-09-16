create table patrfgaf
(
dfinsys     varchar2(1),
finsite     varchar2(6),
finyear     varchar2(4),
fintype     varchar2(1),
fincode     varchar2(13),
finper      number(14,2),
finmth1     number(14,2),
finmth2     number(14,2),
finmth3     number(14,2),
finmth4     number(14,2),
finmth5     number(14,2),
finmth6     number(14,2),
finmth7     number(14,2),
finmth8     number(14,2),
finmth9     number(14,2),
finmth10    number(14,2),
finmth11    number(14,2),
finmth12    number(14,2),
finmth13    number(14,2),
flstyr      number(14,2),
finhosp     varchar2(3),
fspare      varchar2(7),
lf          varchar2(1),
constraint patrfga1 primary key( 
dfinsys,
finsite,
finyear,
fintype,
fincode,
finhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patrfgaf for patrfgaf;
create unique index patrfga2 on patrfgaf
(
finhosp,
dfinsys,
finsite,
finyear,
fintype,
fincode
)
  tablespace pas_indx; 
