<mxfile host="app.diagrams.net" modified="2022-07-20T03:51:56.403Z" agent="5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36" etag="NCkbtbuPyoQ_QWn98QSM" version="20.1.1" type="github">
  <diagram name="Page-1" id="e7e014a7-5840-1c2e-5031-d8a46d1fe8dd">
    <mxGraphModel dx="1960" dy="934" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="1169" pageHeight="826" background="none" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="IxwGFpHhan6lonelRvBK-41" value="ContextImpl" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" parent="1" vertex="1">
          <mxGeometry x="80" y="317" width="310" height="86" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-42" value="+ mContentResolver: ApplicationContentResolver&#xa;&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" parent="IxwGFpHhan6lonelRvBK-41" vertex="1">
          <mxGeometry y="26" width="310" height="26" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-43" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" parent="IxwGFpHhan6lonelRvBK-41" vertex="1">
          <mxGeometry y="52" width="310" height="8" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-44" value="+ getContentResolver(): ApplicationContentResolver&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" parent="IxwGFpHhan6lonelRvBK-41" vertex="1">
          <mxGeometry y="60" width="310" height="26" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-45" value="ApplicationContentResolver" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" parent="1" vertex="1">
          <mxGeometry x="103" y="183" width="270" height="80" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-47" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" parent="IxwGFpHhan6lonelRvBK-45" vertex="1">
          <mxGeometry y="26" width="270" height="8" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-48" value="+ acquireUnstableProvider(): IContentProvider&#xa;+ acquireProvider(): IContentProvider&#xa;&#xa;&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" parent="IxwGFpHhan6lonelRvBK-45" vertex="1">
          <mxGeometry y="34" width="270" height="46" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-50" value="" style="endArrow=open;startArrow=circlePlus;endFill=0;startFill=0;endSize=8;html=1;rounded=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;entryX=0.488;entryY=1.022;entryDx=0;entryDy=0;entryPerimeter=0;" parent="1" edge="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="230" y="317" as="sourcePoint" />
            <mxPoint x="229.76" y="264.01199999999994" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-51" value="ContentResolver" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" parent="1" vertex="1">
          <mxGeometry x="150" y="60" width="160" height="60" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-53" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" parent="IxwGFpHhan6lonelRvBK-51" vertex="1">
          <mxGeometry y="26" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-54" value="+ call() : Bundle&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" parent="IxwGFpHhan6lonelRvBK-51" vertex="1">
          <mxGeometry y="34" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="IxwGFpHhan6lonelRvBK-55" value="" style="endArrow=block;dashed=1;endFill=0;endSize=12;html=1;rounded=0;" parent="1" target="IxwGFpHhan6lonelRvBK-54" edge="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="230" y="180" as="sourcePoint" />
            <mxPoint x="600" y="240" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-1" value="ActivityThread" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="460" y="179" width="280" height="140" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-2" value="+ mProviderMap" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-1">
          <mxGeometry y="26" width="280" height="26" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-3" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-1">
          <mxGeometry y="52" width="280" height="8" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-4" value="+ acquireProvider(): IContentProvider&#xa;+ acquireExistingProvider() : IContentProvider&#xa;+ installContentProviders()&#xa;+ installProvider()&#xa;+ handleBindApplication()&#xa;&#xa;&#xa;&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-1">
          <mxGeometry y="60" width="280" height="80" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-5" value="Use" style="endArrow=open;endSize=12;dashed=1;html=1;rounded=0;exitX=1.007;exitY=0.348;exitDx=0;exitDy=0;exitPerimeter=0;entryX=-0.005;entryY=0.125;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="1" source="IxwGFpHhan6lonelRvBK-48" target="lDoyYdHdPo7ZaolpgIR1-3">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="740" y="290" as="sourcePoint" />
            <mxPoint x="900" y="290" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-6" value="ActivityManagerService" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="832" y="184" width="270" height="120" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-7" value="+ mCpHelper: ContentProviderHelper&#xa;&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-6">
          <mxGeometry y="26" width="270" height="26" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-8" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-6">
          <mxGeometry y="52" width="270" height="8" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-9" value="+ getContentProvider(): ContentProviderHolder&#xa;+ publishContentProviders()&#xa;+ startProcessLocked()" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-6">
          <mxGeometry y="60" width="270" height="60" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-10" value="Use" style="endArrow=open;endSize=12;dashed=1;html=1;rounded=0;exitX=1;exitY=-0.05;exitDx=0;exitDy=0;exitPerimeter=0;entryX=-0.007;entryY=-0.135;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="1" source="lDoyYdHdPo7ZaolpgIR1-4" target="lDoyYdHdPo7ZaolpgIR1-9">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="890" y="280" as="sourcePoint" />
            <mxPoint x="1050" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-11" value="ContentProviderHelper" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="820" y="350" width="290" height="120" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-12" value="+ mProviderMap&#xa;&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-11">
          <mxGeometry y="26" width="290" height="26" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-13" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-11">
          <mxGeometry y="52" width="290" height="8" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-14" value="+ getContentProviderImpl(): ContentProviderHolder&#xa;&#xa;+ publishContentProviders()&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-11">
          <mxGeometry y="60" width="290" height="60" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-15" value="Use" style="endArrow=open;endSize=12;dashed=1;html=1;rounded=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;exitX=0.49;exitY=1.041;exitDx=0;exitDy=0;exitPerimeter=0;" edge="1" parent="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="943.2999999999997" y="306.4599999999998" as="sourcePoint" />
            <mxPoint x="944" y="349.9999999999998" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-16" value="ApplicationThread" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="460" y="360" width="290" height="80" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-18" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-16">
          <mxGeometry y="26" width="290" height="8" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-19" value="+ scheduleInstallProvider()&#xa;+ bindApplication()" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="lDoyYdHdPo7ZaolpgIR1-16">
          <mxGeometry y="34" width="290" height="46" as="geometry" />
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-20" value="" style="endArrow=open;startArrow=circlePlus;endFill=0;startFill=0;endSize=8;html=1;rounded=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" target="lDoyYdHdPo7ZaolpgIR1-16">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="605" y="310" as="sourcePoint" />
            <mxPoint x="900" y="420" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-21" value="Use" style="endArrow=open;endSize=12;dashed=1;html=1;rounded=0;exitX=0.505;exitY=1.043;exitDx=0;exitDy=0;exitPerimeter=0;entryX=0.4;entryY=1.14;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="1" source="lDoyYdHdPo7ZaolpgIR1-14" target="lDoyYdHdPo7ZaolpgIR1-19">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="740" y="420" as="sourcePoint" />
            <mxPoint x="900" y="420" as="targetPoint" />
            <Array as="points">
              <mxPoint x="966" y="530" />
              <mxPoint x="710" y="530" />
              <mxPoint x="577" y="530" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-22" value="Use" style="endArrow=open;endSize=12;dashed=1;html=1;rounded=0;exitX=0.75;exitY=0;exitDx=0;exitDy=0;entryX=0.759;entryY=0.994;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="987.5" y="349.9999999999998" as="sourcePoint" />
            <mxPoint x="986.9299999999998" y="303.6399999999999" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="lDoyYdHdPo7ZaolpgIR1-24" value="Use" style="endArrow=open;endSize=12;dashed=1;html=1;rounded=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" target="lDoyYdHdPo7ZaolpgIR1-19">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="830" y="280" as="sourcePoint" />
            <mxPoint x="900" y="300" as="targetPoint" />
            <Array as="points">
              <mxPoint x="790" y="280" />
              <mxPoint x="790" y="417" />
            </Array>
          </mxGeometry>
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
