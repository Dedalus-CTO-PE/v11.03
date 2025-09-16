create table ceamcpaf
(
  cemcjcd     varchar2(3) default ' ' not null,
  cemcspc     varchar2(3) default ' ' not null,
  cemcpsc     varchar2(7) default ' ' not null,
  cemcdqty    number(8,2) default 0 not null,
  cemctqty    number(8,2) default 0 not null,
  cemcspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceamcpa1 primary key( 
cemcjcd,
cemcspc,
cemcpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
