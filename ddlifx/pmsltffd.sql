create table pmsltfaf
(
  pmltseid    char(4) default ' ' not null,
  pmltsedc    char(35) default ' ' not null,
  pmltvdfr    char(8) default ' ' not null,
  pmltvdto    char(8) default ' ' not null,
  pmltddfr    char(8) default ' ' not null,
  pmltddto    char(8) default ' ' not null,
  pmltsnfr    char(20) default ' ' not null,
  pmltsnto    char(20) default ' ' not null,
  pmltllfr    char(3) default ' ' not null,
  pmltllto    char(3) default ' ' not null,
  pmltldfr    char(8) default ' ' not null,
  pmltldto    char(8) default ' ' not null,
  pmltfcfr    char(3) default ' ' not null,
  pmltfcto    char(3) default ' ' not null,
  pmltfdfr    char(8) default ' ' not null,
  pmltfdto    char(8) default ' ' not null,
  pmltccfr    char(3) default ' ' not null,
  pmltccto    char(3) default ' ' not null,
  pmltatfr    char(3) default ' ' not null,
  pmltatto    char(3) default ' ' not null,
  pmltoamt    decimal(9,2) default 0 not null,
  pmltiiin    char(1) default ' ' not null,
  pmltpdfr    char(8) default ' ' not null,
  pmltpdto    char(8) default ' ' not null,
  pmltdstt    char(1) default ' ' not null,
  pmltsyst    char(1) default ' ' not null,
  pmltlcod    char(3) default ' ' not null,
  pmltldat    char(8) default ' ' not null,
  pmltrcnt    char(5) default ' ' not null,
  pmltmhos    char(3) default ' ' not null,
  pmlthfun    char(6) default ' ' not null,
  pmltinsr    char(6) default ' ' not null,
  pmltmisc    char(9) default ' ' not null,
  pmltppln    char(1) default ' ' not null,
  pmltudat    char(8) default ' ' not null,
  pmltutim    char(8) default ' ' not null,
  pmltspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index pmsltfa1 on pmsltfaf
(
pmltseid
);
revoke all on pmsltfaf from public ; 
grant select on pmsltfaf to public ; 
