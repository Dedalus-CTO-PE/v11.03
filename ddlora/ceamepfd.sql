create table ceamepaf
(
  cemesty     varchar2(3) default ' ' not null,
  cemekey     varchar2(10) default ' ' not null,
  cemespc     varchar2(3) default ' ' not null,
  cemepsc     varchar2(7) default ' ' not null,
  cemedos     number(2,0) default 0 not null,
  cemetyq     number(2,0) default 0 not null,
  cemeqty     number(8,2) default 0 not null,
  cemespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceamepa1 primary key( 
cemesty,
cemekey,
cemespc,
cemepsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
