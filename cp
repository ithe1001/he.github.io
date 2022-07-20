<mxfile host="app.diagrams.net" modified="2022-07-20T03:26:32.476Z" agent="5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36" etag="ebGd6Zkm17shbRpH7r5p" version="20.1.1" type="github">
  <diagram name="Page-1" id="e7e014a7-5840-1c2e-5031-d8a46d1fe8dd">
    <mxGraphModel dx="2221" dy="1059" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="1169" pageHeight="826" background="none" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="IxwGFpHhan6lonelRvBK-41" value="ContextImpl" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="180" y="437" width="310" height="86" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-42" value="+ mContentResolver: ApplicationContentResolver&#xa;&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="IxwGFpHhan6lonelRvBK-41">
          <mxGeometry y="26" width="310" height="26" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-43" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="IxwGFpHhan6lonelRvBK-41">
          <mxGeometry y="52" width="310" height="8" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-44" value="+ getContentResolver(): ApplicationContentResolver&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="IxwGFpHhan6lonelRvBK-41">
          <mxGeometry y="60" width="310" height="26" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-45" value="ApplicationContentResolver" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="203" y="303" width="270" height="80" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-47" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="IxwGFpHhan6lonelRvBK-45">
          <mxGeometry y="26" width="270" height="8" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-48" value="+ acquireUnstableProvider(): IContentProvider&#xa;+ acquireProvider(): IContentProvider&#xa;&#xa;&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="IxwGFpHhan6lonelRvBK-45">
          <mxGeometry y="34" width="270" height="46" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-50" value="" style="endArrow=open;startArrow=circlePlus;endFill=0;startFill=0;endSize=8;html=1;rounded=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;entryX=0.488;entryY=1.022;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="330" y="437" as="sourcePoint" />
            <mxPoint x="329.76" y="384.01199999999994" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-51" value="ContentResolver" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="250" y="180" width="160" height="60" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-53" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="IxwGFpHhan6lonelRvBK-51">
          <mxGeometry y="26" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-54" value="+ call() : Bundle&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="IxwGFpHhan6lonelRvBK-51">
          <mxGeometry y="34" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-55" value="" style="endArrow=block;dashed=1;endFill=0;endSize=12;html=1;rounded=0;" edge="1" parent="1" target="IxwGFpHhan6lonelRvBK-54">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="330" y="300" as="sourcePoint" />
            <mxPoint x="700" y="360" as="targetPoint" />
          </mxGeometry>
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
